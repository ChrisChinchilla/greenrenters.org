INSERT INTO `civicrm_participant_status_type` (`name`, `label`, `class`, `is_reserved`, `is_active`, `is_counted`, `weight`, `visibility_id`)
VALUES
  ('Booker - Interest', 'Booker - Interest', 'Pending', NULL, 1, 0, 28, 1),
  ('Accounting Paid', 'Accounting Paid', 'Positive', NULL, 1, 0, 27, 2),
  ('To Pay Accounting', 'To Pay Accounting', 'Pending', NULL, 1, 0, 26, 2),
  ('Admin Paid', 'Admin Paid', 'Positive', NULL, 1, 0, 25, 2),
  ('To Pay Admin', 'To Pay Admin', 'Pending', NULL, 1, 0, 24, 2),
  ('Presenter Paid', 'Presenter Paid', 'Positive', NULL, 1, 0, 23, 2),
  ('Presenter - Pay', 'Presenter - Pay', 'Positive', NULL, 1, 0, 22, 2),
  ('Booker - Quote', 'Booker - Quote', 'Pending', NULL, 1, 0, 20, 2),
  ('Booker - Confirmed', 'Booker - Confirmed', 'Positive', NULL, 1, 0, 19, 2),
  ('Booker - Invoice', 'Booker - Invoice', 'Pending', NULL, 1, 0, 18, 2),
  ('Booker - Paid', 'Booker - Paid', 'Positive', NULL, 1, 0, 21, 2),
  ('Presenter - Confirm', 'Presenter - Confirm', 'Positive', NULL, 1, 0, 17, 2),
  ('Presenter - Interest', 'Presenter - Interest', 'Pending', NULL, 1, 0, 16, 2),
  ('Confirmed Volunteer', 'Confirmed Volunteer', 'Positive', NULL, 1, 0, 15, 2),
  ('Interested Volunteer', 'Interested Volunteer', 'Pending', NULL, 1, 0, 14, 2);


INSERT INTO `civicrm_option_value` (`option_group_id`, `label`, `value`, `name`, `grouping`, `filter`, `is_default`, `weight`, `description`, `is_optgroup`, `is_reserved`, `is_active`, `component_id`, `domain_id`, `visibility_id`)
VALUES
  (13, 'Booker', '5', 'Booker', NULL, 0, 0, 4, NULL, 0, 0, 1, NULL, NULL, NULL),
  (13, 'Admin', '6', 'Admin', NULL, 0, 0, 5, NULL, 0, 0, 1, NULL, NULL, NULL),
  (13, 'Finance', '7', 'Finance Contact', NULL, 0, 0, 6, NULL, 0, 0, 1, NULL, NULL, NULL);


INSERT INTO `civicrm_price_set` (`id`, `domain_id`, `name`, `title`, `is_active`, `help_pre`, `help_post`, `javascript`, `extends`, `financial_type_id`, `is_quick_config`, `is_reserved`)
VALUES
  (999, NULL, 'Base_Event_price_set', 'Base Event price set', 1, NULL, NULL, NULL, '1', NULL, 0, 0);


INSERT INTO `civicrm_price_field` (`id`, `price_set_id`, `name`, `label`, `html_type`, `is_enter_qty`, `help_pre`, `help_post`, `weight`, `is_display_amounts`, `options_per_line`, `is_active`, `is_required`, `active_on`, `expire_on`, `javascript`, `visibility_id`)
VALUES
  (997, 999, 'Internal_Fees', 'Internal Fees', 'CheckBox', 0, NULL, NULL, 4, 1, 1, 1, 0, NULL, NULL, NULL, 2),
  (998, 999, 'Event_Fee_s_', 'Event Fee(s)', 'Radio', 0, NULL, NULL, 5, 1, 1, 1, 0, NULL, NULL, NULL, 1),
  (999, 999, 'Additional_Donation', 'Additional Donation', 'Text', 1, NULL, NULL, 6, 1, 1, 1, 0, NULL, NULL, NULL, 1);


INSERT INTO `civicrm_price_field_value` (`price_field_id`, `name`, `label`, `description`, `amount`, `count`, `max_value`, `weight`, `is_default`, `is_active`, `membership_type_id`)
VALUES
  (999, 'Additional_Donation', 'Additional Donation', NULL, '1', NULL, NULL, 6, 0, 1, NULL),
  (998, 'Full_Price', 'Full Price', NULL, '30', 1, NULL, 1, 1, 1, NULL),
  (998, 'Concession', 'Concession', NULL, '25', 1, NULL, 2, 0, 1, NULL),
  (997, 'Presenter', 'Presenter', NULL, '-100', NULL, NULL, 1, 0, 1, NULL),
  (997, 'Accounting', 'Accounting', NULL, '-10.4', NULL, NULL, 3, 0, 1, NULL),
  (997, 'Admin', 'Admin', NULL, '-100', NULL, NULL, 4, 0, 1, NULL),
  (997, 'Workshop_Cost', 'Workshop Cost', NULL, '260', NULL, NULL, 5, 0, 1, NULL);
