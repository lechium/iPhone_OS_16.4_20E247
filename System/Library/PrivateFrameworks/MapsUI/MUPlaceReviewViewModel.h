//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUPlaceReviewAvatarGenerator, NSDate, NSString;
@protocol MKMapItemProviderRatingSnippet;

__attribute__((visibility("hidden")))
@interface MUPlaceReviewViewModel : NSObject
{
    id <MKMapItemProviderRatingSnippet> _ratingSnippet;	// 8 = 0x8
    MUPlaceReviewAvatarGenerator *_avatarGenerator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f60e4
- (void)loadUserIconWithPointSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f5f71
@property(readonly, nonatomic) NSString *reviewText;
@property(readonly, nonatomic) NSDate *reviewDate;
@property(readonly, nonatomic) NSString *authorText;
@property(readonly, nonatomic) double normalizedScore;
- (id)initWithRatingSnippet:(id)arg1 avatarGenerator:(id)arg2;	// IMP=0x00000000000f5e80

@end

