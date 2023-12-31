//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UINavigationControllerDelegate;

@interface CNTestNavigationControllerDelegate : NSObject
{
    id <UINavigationControllerDelegate> _delegate;	// 8 = 0x8
    CDUnknownBlockType _willShow;	// 16 = 0x10
    CDUnknownBlockType _didShow;	// 24 = 0x18
}

+ (id)delegateWithDelegate:(id)arg1 willShowViewControllerHandler:(CDUnknownBlockType)arg2 didShowViewControllerHandler:(CDUnknownBlockType)arg3;	// IMP=0x002000000000a4b9
- (void).cxx_destruct;	// IMP=0x002000000000a7d7
@property(copy, nonatomic) CDUnknownBlockType didShow; // @synthesize didShow=_didShow;
@property(copy, nonatomic) CDUnknownBlockType willShow; // @synthesize willShow=_willShow;
@property(retain, nonatomic) id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x001000000000a707
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000000a6a3
- (_Bool)_selfReallyRespondsToSelector:(SEL)arg1;	// IMP=0x001000000000a669
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000a5e9
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000a569

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

