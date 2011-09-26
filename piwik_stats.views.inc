<?php
/**
 * @file
 * Provide views data and handlers for comment.module
 */

/**
 * Implements hook_views_data().
 */
function piwik_stats_views_data() {
  $data = array();

  // Create views table group for piwik statistics.
  $data['piwik_stats']['table']['group']  = t('Piwik');

  // Join with the node and node_revisions table by nid field.
  $data['piwik_stats']['table']['join'] = array(
    'node_revisions' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // See 'title' and 'help' values for more information in the following lines.
  $data['piwik_stats']['nb_visits'] = array(
    'title' => t('Visits'),
    'help' => t('Piwik unique pageviews (visits).'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['nb_hits'] = array(
    'title' => t('Hits'),
    'help' => t('Piwik pageviews (hits).'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['entry_nb_visits'] = array(
    'title' => t('Entry visits'),
    'help' => t('Number of visits that started on a node.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['entry_nb_actions'] = array(
    'title' => t('Entry actions'),
    'help' => t('Number of page views for visits that started on that node.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['entry_sum_visit_length'] = array(
    'title' => t('Entry time spend'),
    'help' => t('Time spend, in seconds, by visits that started on this node.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['entry_bounce_count'] = array(
    'title' => t('Entry bounce count'),
    'help' => t('Number of visits that started on this node and bounced (viewed only one page).'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['exit_nb_visits'] = array(
    'title' => t('Exit visits'),
    'help' => t('Number of visits that finished on this node.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['sum_time_spend'] = array(
    'title' => t('Time spend'),
    'help' => t('Total time spend on this node, in seconds.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['avg_time_on_page'] = array(
    'title' => t('Average time spend'),
    'help' => t('Average time spend on node (in seconds).'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['bounce_rate'] = array(
    'title' => t('Bounce rate'),
    'help' => t('Ratio of visitors leaving the website after landing on this node (in percent).'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['piwik_stats']['exit_rate'] = array(
    'title' => t('Exit rate'),
    'help' => t('Ratio of visitors that do not view any other page after this node (in percent).'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
