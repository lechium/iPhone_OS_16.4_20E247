//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CNContactToggleBlockCallerAction : CNContactAction
{
    NSNumber *_isBlockedCachedValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ab29a
@property(retain, nonatomic) NSNumber *isBlockedCachedValue; // @synthesize isBlockedCachedValue=_isBlockedCachedValue;
- (void)setContactBlocked:(_Bool)arg1;	// IMP=0x00000000000ab1b9
- (id)allNumbersAndEmails;	// IMP=0x00000000000ab015
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000aad10
- (id)checkIsContactBlocked;	// IMP=0x00000000000aaca9
- (_Bool)isContactBlockedPreservingChanges:(_Bool)arg1;	// IMP=0x00000000000aabf2

@end
