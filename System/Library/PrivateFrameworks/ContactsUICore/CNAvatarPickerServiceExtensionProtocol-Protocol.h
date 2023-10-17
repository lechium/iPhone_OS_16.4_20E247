//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNMemojiMetadata, NSArray, NSString;

@protocol CNAvatarPickerServiceExtensionProtocol <NSObject>
- (void)overrideUserInterfaceStyle:(long long)arg1;
- (void)setSelectedRecordIdentifier:(NSString *)arg1;

@optional
- (void)setSetupUserAvatarRecords:(NSArray *)arg1;
- (void)setCurrentMemojiMetadata:(CNMemojiMetadata *)arg1;
@end
