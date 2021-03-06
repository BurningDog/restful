<?php

$plugin = array(
  'label' => t('Token authentication'),
  'resource' => 'token_auth',
  'name' => 'token_auth__1_0',
  'entity_type' => 'restful_token_auth',
  'bundle' => 'restful_token_auth',
  'description' => t('Export the token authentication resource.'),
  'class' => 'RestfulTokenAuthentication',
  'authentication_types' => array(
    'cookie',
    'basic_auth',
  ),
  // We will implement hook_menu() with custom settings.
  'menu_item' => variable_get('restful_hook_menu_base_path', 'api') . '/login-token',
);
