//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CRLOnce : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _didPerformOnce;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000212c57
- (void)performBlockOnce:(CDUnknownBlockType)arg1;	// IMP=0x0010000000212bae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000212af9
- (id)init;	// IMP=0x0010000000212aa1

@end
