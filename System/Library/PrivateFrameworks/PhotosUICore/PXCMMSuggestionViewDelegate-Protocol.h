//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCMMSuggestionView;

@protocol PXCMMSuggestionViewDelegate <NSObject>
- (void)presentDetailViewForSuggestionView:(PXCMMSuggestionView *)arg1 animated:(_Bool)arg2;

@optional
- (void)dynamicUserInterfaceTraitDidChange;
- (void)suggestionViewSizeThatFitsDidChange:(PXCMMSuggestionView *)arg1;
@end
