//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (TSUAdditions)
+ (id)tsu_newSerialOperationQueueWithName:(id)arg1;	// IMP=0x002000000029ad89
- (void)tsu_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000029ae7d
@property(readonly, nonatomic) _Bool tsu_isCurrentQueue;
@end
