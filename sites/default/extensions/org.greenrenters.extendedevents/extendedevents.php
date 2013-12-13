<?php

require_once 'extendedevents.civix.php';

/**
 * Implementation of hook_civicrm_config
 */
function extendedevents_civicrm_config(&$config) {
  _extendedevents_civix_civicrm_config($config);
}

/**
 * Implementation of hook_civicrm_xmlMenu
 *
 * @param $files array(string)
 */
function extendedevents_civicrm_xmlMenu(&$files) {
  _extendedevents_civix_civicrm_xmlMenu($files);
}

/**
 * Implementation of hook_civicrm_install
 */
function extendedevents_civicrm_install() {
  return _extendedevents_civix_civicrm_install();
}

/**
 * Implementation of hook_civicrm_uninstall
 */
function extendedevents_civicrm_uninstall() {
  return _extendedevents_civix_civicrm_uninstall();
}

/**
 * Implementation of hook_civicrm_enable
 */
function extendedevents_civicrm_enable() {
  return _extendedevents_civix_civicrm_enable();
}

/**
 * Implementation of hook_civicrm_disable
 */
function extendedevents_civicrm_disable() {
  return _extendedevents_civix_civicrm_disable();
}

/**
 * Implementation of hook_civicrm_upgrade
 *
 * @param $op string, the type of operation being performed; 'check' or 'enqueue'
 * @param $queue CRM_Queue_Queue, (for 'enqueue') the modifiable list of pending up upgrade tasks
 *
 * @return mixed  based on op. for 'check', returns array(boolean) (TRUE if upgrades are pending)
 *                for 'enqueue', returns void
 */
function extendedevents_civicrm_upgrade($op, CRM_Queue_Queue $queue = NULL) {
  return _extendedevents_civix_civicrm_upgrade($op, $queue);
}

/**
 * Implementation of hook_civicrm_managed
 *
 * Generate a list of entities to create/deactivate/delete when this module
 * is installed, disabled, uninstalled.
 */
function extendedevents_civicrm_managed(&$entities) {
  return _extendedevents_civix_civicrm_managed($entities);
}

function extendedevents_civicrm_post( $op, $objectName, $objectId, &$objectRef )  {
  if (($objectName == "Event") && ($objectRef->event_type_id="6") && ($op == "create")){
    $startHour = substr($objectRef->start_date,8,2) ;
    $startMinute = substr($objectRef->start_date,10,2) ;

    $endHour = substr($objectRef->end_date,8,2) ;
    $endMinute = substr($objectRef->end_date,10,2) ;

    $timeDiff = $endHour - $startHour ;
    if ($endMinute - $startMinute > 0) $timeDiff += 0.5 ;

    /* Admin */

    $adminPriceFieldValueParams = array(
      'version' => 3,
      'sequential' => 1,
      'price_field_id' => 1021,
    );

    $adminPriceFieldValueResult = civicrm_api('PriceFieldValue', 'getsingle', $adminPriceFieldValueParams);

    $adminParticipantParams = array(
      'version' => 3,
      'sequential' => 1,
      'event_id' => $objectRef->id,
      'contact_id' => 5840,
      'participant_role_id' => 6,
      'participant_status_id' => 24,
      'participant_register_date' => date('YmdHis'),
      'participant_fee_amount' => $adminPriceFieldValueResult['amount'] * $timeDiff,
      'participant_fee_currency' => "AUD",
      'participant_fee_level' => $adminPriceFieldValueResult['label'],
    );

    $adminParticipantResult = civicrm_api('Participant', 'create', $adminParticipantParams);

    $adminContributionParams = array(
      'version' => 3,
      'sequential' => 1,
      'contact_id' => 5840,
      'financial_type_id' => 4,
      'total_amount' => $adminPriceFieldValueResult['amount'] * $timeDiff,
      'contribution_source' => $objectRef->title,
      'is_pay_later' => 1,
      'contribution_status_id' => 2,
    );

    $adminContributionResult = civicrm_api('Contribution', 'create', $adminContributionParams);

    $adminParticipantPaymentParams = array(
      'version' => 3,
      'sequential' => 1,
      'participant_id' => $adminParticipantResult['id'],
      'contribution_id' => $adminContributionResult['id'],
    );

    $adminParticipantPaymentResult = civicrm_api('ParticipantPayment', 'create', $adminParticipantPaymentParams);

    /* Finance */

    $financePriceFieldValueParams = array(
      'version' => 3,
      'sequential' => 1,
      'price_field_id' => 1023,
    );

    $financePriceFieldValueResult = civicrm_api('PriceFieldValue', 'getsingle', $financePriceFieldValueParams);

    $financeParticipantParams = array(
      'version' => 3,
      'sequential' => 1,
      'event_id' => $objectRef->id,
      'contact_id' => 5840,
      'participant_role_id' => 7,
      'participant_status_id' => 26,
      'participant_register_date' => date('YmdHis'),
      'participant_fee_amount' => $financePriceFieldValueResult['amount'] * $timeDiff,
      'participant_fee_currency' => "AUD",
      'participant_fee_level' => $financePriceFieldValueResult['label'],
    );

    $financeParticipantResult = civicrm_api('Participant', 'create', $financeParticipantParams);

    // STILL NEED CONTRIBUTION, then match to payment

    $financeContributionParams = array(
      'version' => 3,
      'sequential' => 1,
      'contact_id' => 5840,
      'financial_type_id' => 4,
      'total_amount' => $financePriceFieldValueResult['amount'] * $timeDiff,
      'contribution_source' => $objectRef->title,
      'is_pay_later' => 1,
      'contribution_status_id' => 2,
    );

    $financeContributionResult = civicrm_api('Contribution', 'create', $financeContributionParams);

    $financeParticipantPaymentParams = array(
      'version' => 3,
      'sequential' => 1,
      'participant_id' => $financeParticipantResult['id'],
      'contribution_id' => $financeContributionResult['id'],
    );

    $financeParticipantPaymentResult = civicrm_api('ParticipantPayment', 'create', $financeParticipantPaymentParams);

  }

}
