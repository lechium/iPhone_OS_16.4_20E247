//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol EFScheduler;

@interface MFTrashCompactor : NSObject
{
    NSMutableDictionary *_emptiedTrashTimestamps;	// 8 = 0x8
    id <EFScheduler> _scheduler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b564a
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) NSMutableDictionary *emptiedTrashTimestamps; // @synthesize emptiedTrashTimestamps=_emptiedTrashTimestamps;
- (void)emptyTrashForAccount:(id)arg1;	// IMP=0x00100000000b53cb
- (id)init;	// IMP=0x00100000000b531e

@end

