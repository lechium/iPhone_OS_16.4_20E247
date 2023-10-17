//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetDelegate-Protocol.h>

@class PXContentSyndicationCountsController, PXContentSyndicationGadget;
@protocol PXDisplayAsset;

@protocol PXContentSyndicationGadgetDelegate <PXGadgetDelegate>
- (PXContentSyndicationCountsController *)countsControllerForContentSyndicationGadget:(PXContentSyndicationGadget *)arg1;
- (void)contentSyndicationGadget:(PXContentSyndicationGadget *)arg1 presentOneUpAnimated:(_Bool)arg2 asset:(id <PXDisplayAsset>)arg3;
@end
