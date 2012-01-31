<?php
// $Id$

/* return an admin settings form */
function nobookoutline_nodetypes_settings_form() {
  $nodetypesobj = node_get_types();
  $options = array();
  foreach($nodetypesobj as $nodetype) {
    $options[$nodetype->type] =  $nodetype->type;
    
  }
  
	$form['form_nobookoutline_nodetypes'] = array(
		'#type' => 'select',
    '#title' => t('Select Node Types'),
    '#default_value' => variable_get('form_nobookoutline_nodetypes', "book"),
    '#options' => $options,
	  '#multiple' => TRUE,
    '#description' => t('<b>Select the node types to show book outline.</b>'),
	);


  return system_settings_form($form);
}