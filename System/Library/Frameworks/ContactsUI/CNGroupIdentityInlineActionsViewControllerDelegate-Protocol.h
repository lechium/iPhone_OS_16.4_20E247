//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNGroupIdentityInlineActionsViewController, NSString;

@protocol CNGroupIdentityInlineActionsViewControllerDelegate <NSObject>

@optional
- (void)groupIdentityInlineActionsViewController:(CNGroupIdentityInlineActionsViewController *)arg1 willPresentDisambiguationUIForActionType:(NSString *)arg2;
- (void)groupIdentityInlineActionsViewController:(CNGroupIdentityInlineActionsViewController *)arg1 didPerformActionOfType:(NSString *)arg2 fromDisambiguation:(_Bool)arg3;
@end
