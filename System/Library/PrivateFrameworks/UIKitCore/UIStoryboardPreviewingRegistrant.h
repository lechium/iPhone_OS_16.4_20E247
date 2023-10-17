//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSString, UIStoryboardPreviewingSegueTemplateStorage, UIView, UIViewController;
@protocol UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding>
{
    id <UIViewControllerPreviewing> _previewingContext;	// 8 = 0x8
    UIStoryboardPreviewingSegueTemplateStorage *_segueTemplateStorage;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001010d51
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x0000000001010c56
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000000010109b2
- (void)unregisterForPreviewing;	// IMP=0x000000000101095d
- (void)registerForPreviewing;	// IMP=0x00000000010107fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010107f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010107c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
