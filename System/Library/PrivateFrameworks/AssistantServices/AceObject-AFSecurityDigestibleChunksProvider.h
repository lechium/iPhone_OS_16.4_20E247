//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/AceObject.h>

@class NSString;

@interface AceObject (AFSecurityDigestibleChunksProvider)
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000004cdea
- (id)af_dialogIdentifiersForAnalyticsContext;	// IMP=0x002000000013ed7d
- (void)af_addEntriesToAnalyticsContext:(id)arg1;	// IMP=0x002000000013eccc
- (id)af_analyticsContext;	// IMP=0x002000000013eb97
- (id)af_speakableText;	// IMP=0x0020000000163d4f
- (id)af_text;	// IMP=0x0020000000163d47
- (id)af_dialogIdentifier;	// IMP=0x0020000000163d3f
- (_Bool)af_isUserUtterance;	// IMP=0x0020000000163d37
- (_Bool)af_isUtterance;	// IMP=0x0020000000163d2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

