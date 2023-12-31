//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBAudioPlaylistItem.h>

@class NSNumber, NSString;

@interface NTPBAudioPlaylistItem (PlaylistExtensions)
+ (id)readValueFromKeyValuePair:(id)arg1;	// IMP=0x00100000001e6dc1
+ (int)keyValuePairType;	// IMP=0x00100000001e6db6
+ (id)articleIDFromIdentifier:(id)arg1;	// IMP=0x00100000001f71c4
+ (id)identifierFromArticleID:(id)arg1;	// IMP=0x00100000001f7198
- (id)copyWithOrder:(id)arg1;	// IMP=0x00100000001e6eb7
@property(readonly, copy, nonatomic) NSString *tagID;
@property(readonly, copy, nonatomic) NSNumber *order;
- (void)writeToKeyValuePair:(id)arg1;	// IMP=0x00100000001e6dd6
- (id)asCKRecord;	// IMP=0x00100000001f73d4
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000001f722b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

