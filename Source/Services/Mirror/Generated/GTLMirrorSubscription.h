/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLMirrorSubscription.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Mirror API (mirror/v1)
// Description:
//   API for interacting with Glass users via the timeline.
// Documentation:
//   https://developers.google.com/glass
// Classes:
//   GTLMirrorSubscription (0 custom class methods, 9 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMirrorNotification;

// ----------------------------------------------------------------------------
//
//   GTLMirrorSubscription
//

// A subscription to events on a collection.

@interface GTLMirrorSubscription : GTLObject

// The URL where notifications should be delivered (must start with https://).
@property (nonatomic, copy) NSString *callbackUrl;

// The collection to subscribe to. Allowed values are:
// - timeline - Changes in the timeline including insertion, deletion, and
// updates.
// - locations - Location updates.
// - settings - Settings updates.
@property (nonatomic, copy) NSString *collection;

// The ID of the subscription.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The type of resource. This is always mirror#subscription.
@property (nonatomic, copy) NSString *kind;

// Container object for notifications. This is not populated in the Subscription
// resource.
@property (nonatomic, retain) GTLMirrorNotification *notification;

// A list of operations that should be subscribed to. An empty list indicates
// that all operations on the collection should be subscribed to. Allowed values
// are:
// - UPDATE - The item has been updated.
// - INSERT - A new item has been inserted.
// - DELETE - The item has been deleted.
// - MENU_ACTION - A custom menu item has been triggered by the user.
@property (nonatomic, retain) NSArray *operation;  // of NSString

// The time at which this subscription was last modified, formatted according to
// RFC 3339.
@property (nonatomic, retain) GTLDateTime *updated;

// An opaque token sent to the subscriber in notifications so that it can
// determine the ID of the user.
@property (nonatomic, copy) NSString *userToken;

// A secret token sent to the subscriber in notifications so that it can verify
// that the notification was generated by Google.
@property (nonatomic, copy) NSString *verifyToken;

@end