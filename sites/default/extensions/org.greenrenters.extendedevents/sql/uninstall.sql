INSERT INTO `civicrm_participant_status_type` (`id`, `name`, `label`, `class`, `is_reserved`, `is_active`, `is_counted`, `weight`, `visibility_id`)
VALUES
  (28, 'Booker - Interest', 'Booker - Interest', 'Pending', NULL, 1, 0, 28, 1),
  (27, 'Accounting Paid', 'Accounting Paid', 'Positive', NULL, 1, 0, 27, 2),
  (26, 'To Pay Accounting', 'To Pay Accounting', 'Pending', NULL, 1, 0, 26, 2),
  (25, 'Admin Paid', 'Admin Paid', 'Positive', NULL, 1, 0, 25, 2),
  (24, 'To Pay Admin', 'To Pay Admin', 'Pending', NULL, 1, 0, 24, 2),
  (23, 'Presenter Paid', 'Presenter Paid', 'Positive', NULL, 1, 0, 23, 2),
  (22, 'Presenter - Pay', 'Presenter - Pay', 'Positive', NULL, 1, 0, 22, 2),
  (21, 'Booker - Quote', 'Booker - Quote', 'Pending', NULL, 1, 0, 20, 2),
  (20, 'Booker - Confirmed', 'Booker - Confirmed', 'Positive', NULL, 1, 0, 19, 2),
  (19, 'Booker - Invoice', 'Booker - Invoice', 'Pending', NULL, 1, 0, 18, 2),
  (18, 'Booker - Paid', 'Booker - Paid', 'Positive', NULL, 1, 0, 21, 2),
  (17, 'Presenter - Confirm', 'Presenter - Confirm', 'Positive', NULL, 1, 0, 17, 2),
  (16, 'Presenter - Interest', 'Presenter - Interest', 'Pending', NULL, 1, 0, 16, 2),
  (15, 'Confirmed Volunteer', 'Confirmed Volunteer', 'Positive', NULL, 1, 0, 15, 2),
  (14, 'Interested Volunteer', 'Interested Volunteer', 'Pending', NULL, 1, 0, 14, 2);


INSERT INTO `civicrm_option_value` (`id`, `option_group_id`, `label`, `value`, `name`, `grouping`, `filter`, `is_default`, `weight`, `description`, `is_optgroup`, `is_reserved`, `is_active`, `component_id`, `domain_id`, `visibility_id`)
VALUES
  (1115, 13, 'Booker', '5', 'Booker', NULL, 0, 0, 4, NULL, 0, 0, 1, NULL, NULL, NULL),
  (1116, 13, 'Admin', '6', 'Admin', NULL, 0, 0, 5, NULL, 0, 0, 1, NULL, NULL, NULL),
  (1117, 13, 'Finance', '7', 'Finance Contact', NULL, 0, 0, 6, NULL, 0, 0, 1, NULL, NULL, NULL);


DELETE FROM civicrm_price_set WHERE name = 'Base_Event_price_set';
DELETE FROM civicrm_price_field WHERE price_set_id = 81;

INSERT INTO `civicrm_price_field_value` (`id`, `price_field_id`, `name`, `label`, `description`, `amount`, `count`, `max_value`, `weight`, `is_default`, `is_active`, `membership_type_id`)
VALUES
  (152, 125, 'Additional_Donation', 'Additional Donation', NULL, '1', NULL, NULL, 6, 0, 1, NULL),
  (150, 124, 'Full_Price', 'Full Price', NULL, '30', 1, NULL, 1, 1, 1, NULL),
  (151, 124, 'Concession', 'Concession', NULL, '25', 1, NULL, 2, 0, 1, NULL),
  (135, 116, 'Presenter', 'Presenter', NULL, '-100', NULL, NULL, 1, 0, 1, NULL),
  (137, 116, 'Accounting', 'Accounting', NULL, '-10.4', NULL, NULL, 3, 0, 1, NULL),
  (163, 116, 'Admin', 'Admin', NULL, '-100', NULL, NULL, 4, 0, 1, NULL),
  (164, 116, 'Workshop_Cost', 'Workshop Cost', NULL, '260', NULL, NULL, 5, 0, 1, NULL);
