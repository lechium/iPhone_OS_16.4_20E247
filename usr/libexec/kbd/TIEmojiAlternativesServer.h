//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TIEmojiCandidateGenerator;

@interface TIEmojiAlternativesServer : NSObject
{
    TIEmojiCandidateGenerator *_generator;	// 8 = 0x8
    NSArray *_localeIdentifiers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0020000000005e2a
- (void).cxx_destruct;	// IMP=0x00200000000063e9
- (void)alternativesForText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000060da
- (void)updateKeyboardType:(unsigned long long)arg1 appIdentifier:(id)arg2;	// IMP=0x00100000000060c4
- (void)updateForActiveLocaleIdentifiers:(id)arg1;	// IMP=0x0010000000005e7f

@end

