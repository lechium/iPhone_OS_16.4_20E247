//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, TPKContent, TPKContentController, TPKContentView, UIImage;

@protocol TPKContentControllerDelegate <NSObject>
- (void)contentController:(TPKContentController *)arg1 didFinishWithContent:(TPKContent *)arg2 animated:(_Bool)arg3;
- (void)contentController:(TPKContentController *)arg1 contentDidBecomeAvailable:(TPKContent *)arg2 animated:(_Bool)arg3;

@optional
- (UIImage *)contentController:(TPKContentController *)arg1 content:(TPKContent *)arg2 iconForCustomizationID:(long long)arg3;
- (UIImage *)contentController:(TPKContentController *)arg1 contentView:(TPKContentView *)arg2 iconForCustomizationID:(long long)arg3;
- (NSString *)contentController:(TPKContentController *)arg1 personalizedStringForID:(long long)arg2 content:(TPKContent *)arg3;
- (NSDictionary *)contentController:(TPKContentController *)arg1 clientContextMapForKeys:(NSArray *)arg2;
- (void)contentController:(TPKContentController *)arg1 eventOccurred:(long long)arg2 content:(TPKContent *)arg3 context:(NSDictionary *)arg4;
- (void)contentController:(TPKContentController *)arg1 contentViewNeedsLayout:(TPKContentView *)arg2;
- (void)contentController:(TPKContentController *)arg1 actionTapped:(TPKContent *)arg2;
@end

