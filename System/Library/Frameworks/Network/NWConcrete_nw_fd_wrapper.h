//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_fd_wrapper : NSObject
{
    int fd;	// 8 = 0x8
    struct os_unfair_lock_s lock;	// 12 = 0xc
    unsigned long long guard;	// 16 = 0x10
    unsigned int guarded:1;	// 24 = 0x18
}

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000005f28b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

