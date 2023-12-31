//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBPasteButtonTag.h"

__attribute__((visibility("hidden")))
@interface PBSystemInputAssistantPasteButtonTag : PBPasteButtonTag
{
    long long _site;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000002a42
@property(readonly) long long site; // @synthesize site=_site;
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5 editMenuPasteButtonTagVisit:(CDUnknownBlockType)arg6;	// IMP=0x0000000000002a4a
- (unsigned int)secureNameForStyle:(id)arg1;	// IMP=0x0000000000002a37
- (id)resolvedStyleForStyle:(id)arg1;	// IMP=0x00000000000028ab
- (_Bool)isValid;	// IMP=0x0000000000002896
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000283c
- (unsigned long long)hash;	// IMP=0x000000000000280d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002790
- (float)backgroundStatisticsForegroundForStyle:(id)arg1;	// IMP=0x000000000000275b
- (float)backgroundStatisticsFailingContrastForStyle:(id)arg1;	// IMP=0x00000000000026e4
- (float)backgroundStatisticsPassingContrastForStyle:(id)arg1;	// IMP=0x000000000000266d
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;	// IMP=0x0000000000002622
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000025a8
- (id)initWithSite:(long long)arg1;	// IMP=0x0000000000002564

@end

