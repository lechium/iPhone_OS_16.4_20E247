//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEventDetailSuggestedLocationCell, EKStructuredLocation;

@protocol EKEventDetailSuggestedLocationCellDelegate <NSObject>
- (void)didTapDismissSuggestedLocationCell:(EKEventDetailSuggestedLocationCell *)arg1;
- (void)didTapAddSuggestedLocationCell:(EKEventDetailSuggestedLocationCell *)arg1 disambiguatedLocation:(EKStructuredLocation *)arg2;
@end

