//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UISpringLoadedInteractionEffect;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationViewSpringLoadedEffect : NSObject
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004c335
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;	// IMP=0x000000000004c26e
- (id)init;	// IMP=0x000000000004c208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

