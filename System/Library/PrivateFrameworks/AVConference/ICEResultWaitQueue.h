//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICEResultWaitQueue : NSObject
{
    NSMutableArray *queryList;	// 8 = 0x8
    struct _opaque_pthread_cond_t resCond;	// 16 = 0x10
    struct _opaque_pthread_mutex_t resMutex;	// 64 = 0x40
}

- (void)addResult:(struct tagCONNRESULT *)arg1 forCallID:(unsigned int)arg2;	// IMP=0x000000000005dd1b
- (id)copyResultForCallID:(unsigned int)arg1;	// IMP=0x000000000005d9d0
- (void)dealloc;	// IMP=0x000000000005d94f
- (id)init;	// IMP=0x000000000005d8ba

@end

