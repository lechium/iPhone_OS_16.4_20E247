//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSKeyTransparencyVerificationState : NSObject
{
    NSNumber *_transparencyStatus;	// 8 = 0x8
    NSData *_transparencyBlob;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000748e80
@property(readonly, nonatomic) NSData *transparencyBlob; // @synthesize transparencyBlob=_transparencyBlob;
@property(readonly, nonatomic) NSNumber *transparencyStatus; // @synthesize transparencyStatus=_transparencyStatus;
- (id)description;	// IMP=0x0010000000748d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000748d30
- (unsigned long long)hash;	// IMP=0x0010000000748c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000748bf0
- (_Bool)isEqualToKeyTransparencyVerificationState:(id)arg1;	// IMP=0x00100000007488e0
- (id)initWithTransparencyStatus:(id)arg1 transparencyBlob:(id)arg2;	// IMP=0x00100000007487d0

@end
