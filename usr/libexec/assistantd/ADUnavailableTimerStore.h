//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADUnavailableTimerStore : NSObject
{
}

- (void)dismissTimersWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000ff129
- (void)setTimer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ff0c3
- (void)getTimerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff055
- (id)_createUnavailableError;	// IMP=0x00100000000ff037

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
