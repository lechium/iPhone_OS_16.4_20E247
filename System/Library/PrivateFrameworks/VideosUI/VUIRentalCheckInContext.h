//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIRentalCheckInContext : NSObject
{
    NSNumber *_rentalID;	// 8 = 0x8
    NSNumber *_dsid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000268d56
@property(readonly, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSNumber *rentalID; // @synthesize rentalID=_rentalID;
- (unsigned long long)hash;	// IMP=0x0000000000268cb5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000268b5c
- (id)initWithRentalID:(id)arg1 dsid:(id)arg2;	// IMP=0x0000000000268ac3

@end
