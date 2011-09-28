-- SUMMARY --

Piwik Statistic Integration

This module integrates piwik statistics per node.

Following information will be requested from Piwik API and linked per node
  * Unique pageviews.
  * Pageviews.
  * Number of visits that started on a node.
  * Number of page views for visits that started on that node.
  * Time spend, in seconds, by visits that started on this node.
  * Number of visits that started on this node and bounced (viewed only one page).
  * Number of visits that finished on this node.
  * Total time spend on this node, in seconds.
  * Average time spend on node (in seconds).
  * Ratio of visitors leaving the website after landing on this node (in percent).
  * Ratio of visitors that do not view any other page after this node (in percent).

Features
  * Full Views integration
  * Statistics per node
  * Refresh statistics on cron run

Todo
  * Possibility to store more than one date range

-- REQUIREMENTS --

Piwik Web analytics (http://drupal.org/project/piwik)


-- How to use it? --

Install as usual, see http://drupal.org/node/70151 for further information.

Configuration
  Go to the piwik configuration page (admin/config/system/piwik) and set the authentication
  token of your piwik user account. Then choose the period for which the statistics will be
  requested and whether you want to refresh the statistical data on cron run. To request the
  statistics immediately, save your settings and hit the 'Refresh Piwik Statistic data' button.

Usage
  This module comes with a full views integration and makes it easy for you to create things
  like top lists or just a statistical block for your dashboard. To access statistics per node,
  go to any node and click on the 'Piwik' tab (Permission 'View Piwik statistic tab' required).
_________________________________________________________________________________________________
Check out http://drupal.org/sandbox/patrickd/1291374 and http://drupal.org/ for more information.
