//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ShareItem : NSObject
{
}

+ (id)shareItemForObject:(id)arg1;	// IMP=0x004000000088e0e5
+ (id)shareItemWithRoute:(id)arg1 startPOIShape:(id)arg2 endPOIShapes:(id)arg3 includeRoutingApps:(_Bool)arg4;	// IMP=0x001000000088e045
+ (id)shareItemForCurrentLocationIncludingPrintActivity:(_Bool)arg1 withBackingMapItem:(id)arg2;	// IMP=0x001000000088dd48
+ (id)shareItemWithSearchResult:(id)arg1 contact:(id)arg2 includePrintActivity:(_Bool)arg3;	// IMP=0x001000000088dd2f
+ (id)shareItemWithSearchResult:(id)arg1 contact:(id)arg2 includePrintActivity:(_Bool)arg3 applicationActivities:(id)arg4;	// IMP=0x001000000088dc8f

@end
