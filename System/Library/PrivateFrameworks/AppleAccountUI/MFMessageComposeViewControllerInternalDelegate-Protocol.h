//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class MFMessageComposeViewController, NSArray, NSString;

@protocol MFMessageComposeViewControllerInternalDelegate <MFMessageComposeViewControllerDelegate>
- (void)messageComposeViewController:(MFMessageComposeViewController *)arg1 shouldSendMessage:(NSString *)arg2 toRecipients:(NSArray *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (void)messageComposeViewControllerDidShowEntryViewContent:(MFMessageComposeViewController *)arg1;
@end
