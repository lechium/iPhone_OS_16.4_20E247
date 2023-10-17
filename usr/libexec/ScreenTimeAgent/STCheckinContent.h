//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STDeviceID, STUserID;

@interface STCheckinContent : NSObject
{
    STUserID *_userID;	// 8 = 0x8
    STDeviceID *_deviceID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000fca4
+ (long long)contentType;	// IMP=0x001000000000fa5b
- (void).cxx_destruct;	// IMP=0x002000000000ff1b
@property(readonly, copy) STDeviceID *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy) STUserID *userID; // @synthesize userID=_userID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCheckinContent:(id)arg1;	// IMP=0x001000000000fd5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000fcf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000fcac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000fbf6
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000fb31
@property(readonly, copy) NSString *description;
- (id)initWithUserID:(id)arg1 deviceID:(id)arg2;	// IMP=0x001000000000f9a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
