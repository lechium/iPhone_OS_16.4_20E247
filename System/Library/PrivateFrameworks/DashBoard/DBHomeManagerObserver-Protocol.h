//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class DBHomeManager, NSDictionary;

@protocol DBHomeManagerObserver <NSObject>
- (void)homeManager:(DBHomeManager *)arg1 didUpdateHomes:(NSDictionary *)arg2;
- (void)homeManager:(DBHomeManager *)arg1 willRemoveHomes:(NSDictionary *)arg2;
@end

