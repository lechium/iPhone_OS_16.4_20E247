//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSServiceMonitor : NSObject
{
    long long _availability;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    int _token;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011d158
- (id)description;	// IMP=0x000000000011d0db
@property(readonly, nonatomic) NSString *service;
- (long long)serviceAvailability;	// IMP=0x000000000011d0c3
- (void)updateAvailability;	// IMP=0x000000000011d05e
- (void)_updateAvailability;	// IMP=0x000000000011cf5a
- (void)_postAvailability:(long long)arg1;	// IMP=0x000000000011ce96
- (void)dealloc;	// IMP=0x000000000011cdd2
- (id)initWithService:(id)arg1;	// IMP=0x000000000011cae7

@end

