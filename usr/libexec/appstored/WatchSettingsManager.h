//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBag, NPSDomainAccessor, NPSManager;
@protocol OS_dispatch_queue;

@interface WatchSettingsManager : NSObject
{
    AMSBag *_bag;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NPSDomainAccessor *_domainAccessor;	// 32 = 0x20
    NPSManager *_npsManager;	// 40 = 0x28
    int _token;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000c81b1
- (void)dealloc;	// IMP=0x00100000000c7ec7
- (id)init;	// IMP=0x00100000000c7d27

@end

