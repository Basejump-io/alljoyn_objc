////////////////////////////////////////////////////////////////////////////////
// Copyright 2012, Qualcomm Innovation Center, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
#import "AJNBusInterface.h"
#import "AJNBusAttachment.h"
#import "BasicService.h"

const AJNSessionPort kBasicObjectServicePort = 25;
NSString * const kBasicObjectServicePath = @ "/sample";
NSString * const kBasicObjectServiceName = @ "org.alljoyn.bus.sample";
NSString * const kBasicObjectInterfaceName = @ "org.alljoyn.bus.sample";
NSString * const kBasicObjectMethodName = @ "cat";

@protocol MyMethodSample <AJNBusInterface>

- (NSString*)concatenateString:(NSString *)string1 withString:(NSString *)string2;

@end

@interface MyBasicSampleObject : AJNBusObject

@property (nonatomic, strong) id<BasicServiceDelegate> delegate;

@end
