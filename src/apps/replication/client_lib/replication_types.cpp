/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Microsoft Corporation
 * 
 * -=- Robust Distributed System Nucleus (rDSN) -=- 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
/**
 * Autogenerated by Thrift Compiler (@PACKAGE_VERSION@)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <dsn/dist/replication/replication_types.h>

namespace dsn { namespace replication {


global_partition_id::~global_partition_id() throw() {
}


void swap(global_partition_id &a, global_partition_id &b) {
  using ::std::swap;
  swap(a.app_id, b.app_id);
  swap(a.pidx, b.pidx);
}

global_partition_id::global_partition_id(const global_partition_id& other0) {
  app_id = other0.app_id;
  pidx = other0.pidx;
}
global_partition_id& global_partition_id::operator=(const global_partition_id& other1) {
  app_id = other1.app_id;
  pidx = other1.pidx;
  return *this;
}

bool global_partition_id::operator <(const global_partition_id& other1) const 
{
    return app_id < other1.app_id 
        || (app_id == other1.app_id && pidx < other1.pidx)
        ;
}

mutation_header::~mutation_header() throw() {
}


void swap(mutation_header &a, mutation_header &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.ballot, b.ballot);
  swap(a.decree, b.decree);
  swap(a.log_offset, b.log_offset);
  swap(a.last_committed_decree, b.last_committed_decree);
}

mutation_header::mutation_header(const mutation_header& other2) {
  gpid = other2.gpid;
  ballot = other2.ballot;
  decree = other2.decree;
  log_offset = other2.log_offset;
  last_committed_decree = other2.last_committed_decree;
}
mutation_header& mutation_header::operator=(const mutation_header& other3) {
  gpid = other3.gpid;
  ballot = other3.ballot;
  decree = other3.decree;
  log_offset = other3.log_offset;
  last_committed_decree = other3.last_committed_decree;
  return *this;
}

mutation_data::~mutation_data() throw() {
}


void swap(mutation_data &a, mutation_data &b) {
  using ::std::swap;
  swap(a.header, b.header);
  swap(a.updates, b.updates);
}

mutation_data::mutation_data(const mutation_data& other4) {
  header = other4.header;
  updates = other4.updates;
}
mutation_data& mutation_data::operator=(const mutation_data& other5) {
  header = other5.header;
  updates = other5.updates;
  return *this;
}

partition_configuration::~partition_configuration() throw() {
}


void swap(partition_configuration &a, partition_configuration &b) {
  using ::std::swap;
  swap(a.app_type, b.app_type);
  swap(a.gpid, b.gpid);
  swap(a.ballot, b.ballot);
  swap(a.max_replica_count, b.max_replica_count);
  swap(a.primary, b.primary);
  swap(a.secondaries, b.secondaries);
  swap(a.drop_outs, b.drop_outs);
  swap(a.last_committed_decree, b.last_committed_decree);
}

partition_configuration::partition_configuration(const partition_configuration& other6) {
  app_type = other6.app_type;
  gpid = other6.gpid;
  ballot = other6.ballot;
  max_replica_count = other6.max_replica_count;
  primary = other6.primary;
  secondaries = other6.secondaries;
  drop_outs = other6.drop_outs;
  last_committed_decree = other6.last_committed_decree;
}
partition_configuration& partition_configuration::operator=(const partition_configuration& other7) {
  app_type = other7.app_type;
  gpid = other7.gpid;
  ballot = other7.ballot;
  max_replica_count = other7.max_replica_count;
  primary = other7.primary;
  secondaries = other7.secondaries;
  drop_outs = other7.drop_outs;
  last_committed_decree = other7.last_committed_decree;
  return *this;
}

replica_configuration::~replica_configuration() throw() {
}


void swap(replica_configuration &a, replica_configuration &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.ballot, b.ballot);
  swap(a.primary, b.primary);
  swap(a.status, b.status);
}

replica_configuration::replica_configuration(const replica_configuration& other8) {
  gpid = other8.gpid;
  ballot = other8.ballot;
  primary = other8.primary;
  status = other8.status;
}
replica_configuration& replica_configuration::operator=(const replica_configuration& other9) {
  gpid = other9.gpid;
  ballot = other9.ballot;
  primary = other9.primary;
  status = other9.status;
  return *this;
}

prepare_msg::~prepare_msg() throw() {
}


void swap(prepare_msg &a, prepare_msg &b) {
  using ::std::swap;
  swap(a.config, b.config);
  swap(a.mu, b.mu);
}

prepare_msg::prepare_msg(const prepare_msg& other10) {
  config = other10.config;
  mu = other10.mu;
}
prepare_msg& prepare_msg::operator=(const prepare_msg& other11) {
  config = other11.config;
  mu = other11.mu;
  return *this;
}

read_request_header::~read_request_header() throw() {
}


void swap(read_request_header &a, read_request_header &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.code, b.code);
  swap(a.semantic, b.semantic);
  swap(a.version_decree, b.version_decree);
}

read_request_header::read_request_header(const read_request_header& other12) {
  gpid = other12.gpid;
  code = other12.code;
  semantic = other12.semantic;
  version_decree = other12.version_decree;
}
read_request_header& read_request_header::operator=(const read_request_header& other13) {
  gpid = other13.gpid;
  code = other13.code;
  semantic = other13.semantic;
  version_decree = other13.version_decree;
  return *this;
}

write_request_header::~write_request_header() throw() {
}


void swap(write_request_header &a, write_request_header &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.code, b.code);
}

write_request_header::write_request_header(const write_request_header& other14) {
  gpid = other14.gpid;
  code = other14.code;
}
write_request_header& write_request_header::operator=(const write_request_header& other15) {
  gpid = other15.gpid;
  code = other15.code;
  return *this;
}

rw_response_header::~rw_response_header() throw() {
}


void swap(rw_response_header &a, rw_response_header &b) {
  using ::std::swap;
  swap(a.err, b.err);
}

rw_response_header::rw_response_header(const rw_response_header& other16) {
  err = other16.err;
}
rw_response_header& rw_response_header::operator=(const rw_response_header& other17) {
  err = other17.err;
  return *this;
}

prepare_ack::~prepare_ack() throw() {
}


void swap(prepare_ack &a, prepare_ack &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.err, b.err);
  swap(a.ballot, b.ballot);
  swap(a.decree, b.decree);
  swap(a.last_committed_decree_in_app, b.last_committed_decree_in_app);
  swap(a.last_committed_decree_in_prepare_list, b.last_committed_decree_in_prepare_list);
}

prepare_ack::prepare_ack(const prepare_ack& other18) {
  gpid = other18.gpid;
  err = other18.err;
  ballot = other18.ballot;
  decree = other18.decree;
  last_committed_decree_in_app = other18.last_committed_decree_in_app;
  last_committed_decree_in_prepare_list = other18.last_committed_decree_in_prepare_list;
}
prepare_ack& prepare_ack::operator=(const prepare_ack& other19) {
  gpid = other19.gpid;
  err = other19.err;
  ballot = other19.ballot;
  decree = other19.decree;
  last_committed_decree_in_app = other19.last_committed_decree_in_app;
  last_committed_decree_in_prepare_list = other19.last_committed_decree_in_prepare_list;
  return *this;
}

learn_state::~learn_state() throw() {
}


void swap(learn_state &a, learn_state &b) {
  using ::std::swap;
  swap(a.meta, b.meta);
  swap(a.files, b.files);
}

learn_state::learn_state(const learn_state& other20) {
  meta = other20.meta;
  files = other20.files;
}
learn_state& learn_state::operator=(const learn_state& other21) {
  meta = other21.meta;
  files = other21.files;
  return *this;
}

learn_request::~learn_request() throw() {
}


void swap(learn_request &a, learn_request &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.learner, b.learner);
  swap(a.signature, b.signature);
  swap(a.last_committed_decree_in_app, b.last_committed_decree_in_app);
  swap(a.last_committed_decree_in_prepare_list, b.last_committed_decree_in_prepare_list);
  swap(a.app_specific_learn_request, b.app_specific_learn_request);
}

learn_request::learn_request(const learn_request& other22) {
  gpid = other22.gpid;
  learner = other22.learner;
  signature = other22.signature;
  last_committed_decree_in_app = other22.last_committed_decree_in_app;
  last_committed_decree_in_prepare_list = other22.last_committed_decree_in_prepare_list;
  app_specific_learn_request = other22.app_specific_learn_request;
}
learn_request& learn_request::operator=(const learn_request& other23) {
  gpid = other23.gpid;
  learner = other23.learner;
  signature = other23.signature;
  last_committed_decree_in_app = other23.last_committed_decree_in_app;
  last_committed_decree_in_prepare_list = other23.last_committed_decree_in_prepare_list;
  app_specific_learn_request = other23.app_specific_learn_request;
  return *this;
}

learn_response::~learn_response() throw() {
}


void swap(learn_response &a, learn_response &b) {
  using ::std::swap;
  swap(a.err, b.err);
  swap(a.config, b.config);
  swap(a.commit_decree, b.commit_decree);
  swap(a.prepare_start_decree, b.prepare_start_decree);
  swap(a.state, b.state);
  swap(a.base_local_dir, b.base_local_dir);
}

learn_response::learn_response(const learn_response& other24) {
  err = other24.err;
  config = other24.config;
  commit_decree = other24.commit_decree;
  prepare_start_decree = other24.prepare_start_decree;
  state = other24.state;
  base_local_dir = other24.base_local_dir;
}
learn_response& learn_response::operator=(const learn_response& other25) {
  err = other25.err;
  config = other25.config;
  commit_decree = other25.commit_decree;
  prepare_start_decree = other25.prepare_start_decree;
  state = other25.state;
  base_local_dir = other25.base_local_dir;
  return *this;
}

group_check_request::~group_check_request() throw() {
}


void swap(group_check_request &a, group_check_request &b) {
  using ::std::swap;
  swap(a.app_type, b.app_type);
  swap(a.node, b.node);
  swap(a.config, b.config);
  swap(a.last_committed_decree, b.last_committed_decree);
  swap(a.learner_signature, b.learner_signature);
}

group_check_request::group_check_request(const group_check_request& other26) {
  app_type = other26.app_type;
  node = other26.node;
  config = other26.config;
  last_committed_decree = other26.last_committed_decree;
  learner_signature = other26.learner_signature;
}
group_check_request& group_check_request::operator=(const group_check_request& other27) {
  app_type = other27.app_type;
  node = other27.node;
  config = other27.config;
  last_committed_decree = other27.last_committed_decree;
  learner_signature = other27.learner_signature;
  return *this;
}

group_check_response::~group_check_response() throw() {
}


void swap(group_check_response &a, group_check_response &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.err, b.err);
  swap(a.last_committed_decree_in_app, b.last_committed_decree_in_app);
  swap(a.last_committed_decree_in_prepare_list, b.last_committed_decree_in_prepare_list);
  swap(a.learner_status_, b.learner_status_);
  swap(a.learner_signature, b.learner_signature);
  swap(a.node, b.node);
}

group_check_response::group_check_response(const group_check_response& other28) {
  gpid = other28.gpid;
  err = other28.err;
  last_committed_decree_in_app = other28.last_committed_decree_in_app;
  last_committed_decree_in_prepare_list = other28.last_committed_decree_in_prepare_list;
  learner_status_ = other28.learner_status_;
  learner_signature = other28.learner_signature;
  node = other28.node;
}
group_check_response& group_check_response::operator=(const group_check_response& other29) {
  gpid = other29.gpid;
  err = other29.err;
  last_committed_decree_in_app = other29.last_committed_decree_in_app;
  last_committed_decree_in_prepare_list = other29.last_committed_decree_in_prepare_list;
  learner_status_ = other29.learner_status_;
  learner_signature = other29.learner_signature;
  node = other29.node;
  return *this;
}

meta_request_header::~meta_request_header() throw() {
}


void swap(meta_request_header &a, meta_request_header &b) {
  using ::std::swap;
  swap(a.rpc_tag, b.rpc_tag);
}

meta_request_header::meta_request_header(const meta_request_header& other30) {
  rpc_tag = other30.rpc_tag;
}
meta_request_header& meta_request_header::operator=(const meta_request_header& other31) {
  rpc_tag = other31.rpc_tag;
  return *this;
}

meta_response_header::~meta_response_header() throw() {
}


void swap(meta_response_header &a, meta_response_header &b) {
  using ::std::swap;
  swap(a.err, b.err);
  swap(a.primary_address, b.primary_address);
}

meta_response_header::meta_response_header(const meta_response_header& other32) {
  err = other32.err;
  primary_address = other32.primary_address;
}
meta_response_header& meta_response_header::operator=(const meta_response_header& other33) {
  err = other33.err;
  primary_address = other33.primary_address;
  return *this;
}

configuration_update_request::~configuration_update_request() throw() {
}


void swap(configuration_update_request &a, configuration_update_request &b) {
  using ::std::swap;
  swap(a.config, b.config);
  swap(a.type, b.type);
  swap(a.node, b.node);
}

configuration_update_request::configuration_update_request(const configuration_update_request& other34) {
  config = other34.config;
  type = other34.type;
  node = other34.node;
}
configuration_update_request& configuration_update_request::operator=(const configuration_update_request& other35) {
  config = other35.config;
  type = other35.type;
  node = other35.node;
  return *this;
}

configuration_update_response::~configuration_update_response() throw() {
}


void swap(configuration_update_response &a, configuration_update_response &b) {
  using ::std::swap;
  swap(a.err, b.err);
  swap(a.config, b.config);
}

configuration_update_response::configuration_update_response(const configuration_update_response& other36) {
  err = other36.err;
  config = other36.config;
}
configuration_update_response& configuration_update_response::operator=(const configuration_update_response& other37) {
  err = other37.err;
  config = other37.config;
  return *this;
}

configuration_proposal_request::~configuration_proposal_request() throw() {
}


void swap(configuration_proposal_request &a, configuration_proposal_request &b) {
  using ::std::swap;
  swap(a.config, b.config);
  swap(a.type, b.type);
  swap(a.node, b.node);
  swap(a.is_clean_data, b.is_clean_data);
  swap(a.is_upgrade, b.is_upgrade);
}

configuration_proposal_request::configuration_proposal_request(const configuration_proposal_request& other38) {
  config = other38.config;
  type = other38.type;
  node = other38.node;
  is_clean_data = other38.is_clean_data;
  is_upgrade = other38.is_upgrade;
}
configuration_proposal_request& configuration_proposal_request::operator=(const configuration_proposal_request& other39) {
  config = other39.config;
  type = other39.type;
  node = other39.node;
  is_clean_data = other39.is_clean_data;
  is_upgrade = other39.is_upgrade;
  return *this;
}

configuration_query_by_node_request::~configuration_query_by_node_request() throw() {
}


void swap(configuration_query_by_node_request &a, configuration_query_by_node_request &b) {
  using ::std::swap;
  swap(a.node, b.node);
}

configuration_query_by_node_request::configuration_query_by_node_request(const configuration_query_by_node_request& other40) {
  node = other40.node;
}
configuration_query_by_node_request& configuration_query_by_node_request::operator=(const configuration_query_by_node_request& other41) {
  node = other41.node;
  return *this;
}

configuration_query_by_node_response::~configuration_query_by_node_response() throw() {
}


void swap(configuration_query_by_node_response &a, configuration_query_by_node_response &b) {
  using ::std::swap;
  swap(a.err, b.err);
  swap(a.partitions, b.partitions);
}

configuration_query_by_node_response::configuration_query_by_node_response(const configuration_query_by_node_response& other42) {
  err = other42.err;
  partitions = other42.partitions;
}
configuration_query_by_node_response& configuration_query_by_node_response::operator=(const configuration_query_by_node_response& other43) {
  err = other43.err;
  partitions = other43.partitions;
  return *this;
}

configuration_query_by_index_request::~configuration_query_by_index_request() throw() {
}


void swap(configuration_query_by_index_request &a, configuration_query_by_index_request &b) {
  using ::std::swap;
  swap(a.app_name, b.app_name);
  swap(a.partition_indices, b.partition_indices);
}

configuration_query_by_index_request::configuration_query_by_index_request(const configuration_query_by_index_request& other44) {
  app_name = other44.app_name;
  partition_indices = other44.partition_indices;
}
configuration_query_by_index_request& configuration_query_by_index_request::operator=(const configuration_query_by_index_request& other45) {
  app_name = other45.app_name;
  partition_indices = other45.partition_indices;
  return *this;
}

configuration_query_by_index_response::~configuration_query_by_index_response() throw() {
}


void swap(configuration_query_by_index_response &a, configuration_query_by_index_response &b) {
  using ::std::swap;
  swap(a.err, b.err);
  swap(a.partitions, b.partitions);
}

configuration_query_by_index_response::configuration_query_by_index_response(const configuration_query_by_index_response& other46) {
  err = other46.err;
  partitions = other46.partitions;
}
configuration_query_by_index_response& configuration_query_by_index_response::operator=(const configuration_query_by_index_response& other47) {
  err = other47.err;
  partitions = other47.partitions;
  return *this;
}

query_replica_decree_request::~query_replica_decree_request() throw() {
}


void swap(query_replica_decree_request &a, query_replica_decree_request &b) {
  using ::std::swap;
  swap(a.gpid, b.gpid);
  swap(a.node, b.node);
}

query_replica_decree_request::query_replica_decree_request(const query_replica_decree_request& other48) {
  gpid = other48.gpid;
  node = other48.node;
}
query_replica_decree_request& query_replica_decree_request::operator=(const query_replica_decree_request& other49) {
  gpid = other49.gpid;
  node = other49.node;
  return *this;
}

query_replica_decree_response::~query_replica_decree_response() throw() {
}


void swap(query_replica_decree_response &a, query_replica_decree_response &b) {
  using ::std::swap;
  swap(a.err, b.err);
  swap(a.last_decree, b.last_decree);
}

query_replica_decree_response::query_replica_decree_response(const query_replica_decree_response& other50) {
  err = other50.err;
  last_decree = other50.last_decree;
}
query_replica_decree_response& query_replica_decree_response::operator=(const query_replica_decree_response& other51) {
  err = other51.err;
  last_decree = other51.last_decree;
  return *this;
}
}} // namespace