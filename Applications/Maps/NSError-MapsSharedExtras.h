//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MapsSharedExtras)
+ (id)_maps_cancellationError;	// IMP=0x0020000000291e42
+ (id)storePlatformErrorWithUserInfo:(id)arg1;	// IMP=0x00100000006ea4ea
+ (id)searchErrorWithUserInfo:(id)arg1;	// IMP=0x00100000006ea4c2
- (_Bool)_maps_isErrorOfDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000291ee2
@property(readonly, nonatomic) _Bool _maps_isCancellation;
@end

