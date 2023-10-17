//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDSICloudIdentityToken : NSObject
{
    NSString *_token;	// 8 = 0x8
}

+ (id)tokenForCurrentIdentityIfICloudDriveEnabled;	// IMP=0x0040000000015d8f
+ (id)tokenForCurrentIdentityIfCloudKitEnabled;	// IMP=0x0010000000015d1a
- (void).cxx_destruct;	// IMP=0x00200000000161fb
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (id)_hashFor:(id)arg1;	// IMP=0x001000000001618a
- (id)description;	// IMP=0x0010000000016115
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000160af
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000015ff9
- (id)initWithCurrentIdentity;	// IMP=0x0010000000015f54
- (id)initFromArchive:(id)arg1;	// IMP=0x0010000000015eda
- (id)initWithToken:(id)arg1;	// IMP=0x0010000000015e3c

@end
