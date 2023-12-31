//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MRDExternalDeviceAuthTokenRecord : NSObject
{
    NSString *_deviceID;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
    NSDate *_dateCreated;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000108c1c
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;	// IMP=0x0010000000108b6d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000108b3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000108b0e

@end

