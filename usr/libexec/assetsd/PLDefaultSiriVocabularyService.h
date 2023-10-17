//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INVocabulary, NSString;

@interface PLDefaultSiriVocabularyService : NSObject
{
    INVocabulary *_vocabulary;	// 8 = 0x8
}

+ (id)sharedSiriVocabularyService;	// IMP=0x002000000000a82f
- (void).cxx_destruct;	// IMP=0x002000000000a81f
- (void)setVocabularyForUserAlbumInfo:(id)arg1;	// IMP=0x001000000000a819
- (void)setVocabularyForContactNames:(id)arg1;	// IMP=0x001000000000a7fe
- (void)setVocabularyForAlbumNames:(id)arg1;	// IMP=0x001000000000a7e3
- (id)initWithVocabulary:(id)arg1;	// IMP=0x001000000000a778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
