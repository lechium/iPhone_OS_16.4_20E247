//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextInputSessionDeletionAction
{
    unsigned long long _removedTextLength;	// 104 = 0x68
    unsigned long long _removedEmojiCount;	// 112 = 0x70
    unsigned long long _options;	// 120 = 0x78
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long removedEmojiCount; // @synthesize removedEmojiCount=_removedEmojiCount;
@property(nonatomic) unsigned long long removedTextLength; // @synthesize removedTextLength=_removedTextLength;
- (long long)inputActionCount;	// IMP=0x00000000011a9bca
- (id)description;	// IMP=0x00000000011a9aab
- (_Bool)changedContent;	// IMP=0x00000000011a9aa3
- (long long)mergeActionIfPossible:(id)arg1;	// IMP=0x00000000011a97f4

@end

