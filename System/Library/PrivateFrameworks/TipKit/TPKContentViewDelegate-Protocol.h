//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipKit/NSObject-Protocol.h>

@class NSString, TPKBaseContentView, TPSURLAction, UIImage;

@protocol TPKContentViewDelegate <NSObject>
- (UIImage *)contentView:(TPKBaseContentView *)arg1 iconForCustomizationID:(long long)arg2;
- (NSString *)contentView:(TPKBaseContentView *)arg1 personalizedStringForID:(long long)arg2;
- (void)contentView:(TPKBaseContentView *)arg1 needsLayoutForReason:(long long)arg2;
- (void)contentView:(TPKBaseContentView *)arg1 viewTappedForIdentifier:(NSString *)arg2;
- (void)contentView:(TPKBaseContentView *)arg1 actionTapped:(TPSURLAction *)arg2;
- (void)contentViewCloseButtonTapped:(TPKBaseContentView *)arg1;
- (void)contentViewWillBeRemoved:(TPKBaseContentView *)arg1;
- (void)contentViewWillBeShown:(TPKBaseContentView *)arg1;
- (void)contentViewWasCreated:(TPKBaseContentView *)arg1;
@end

