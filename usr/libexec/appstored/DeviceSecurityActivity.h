//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface DeviceSecurityActivity : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001438dc
- (void)run;	// IMP=0x00100000001438d0
@property(readonly) const char *registeredName;
- (_Bool)isEnabled;	// IMP=0x00100000001438bb
@property(readonly) NSString *descriptiveName;
@property(readonly) long long deadline;
@property(readonly) NSObject<OS_xpc_object> *criteria;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
// Error: Property attributes should begin with the type ('T') attribute, property name: enabled
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

