//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISaveToCameraRollActivity.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity
{
    id <PXActivityItemSourceController> _itemSourceController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004286b2
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (_Bool)_itemIsVideoAtURL:(id)arg1;	// IMP=0x000000000042855d
- (void)performActivity;	// IMP=0x0000000000427858
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000000427852
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000427653

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

