//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class CSSearchableItem, EFFuture, NSData, NSDate, NSString;
@protocol EDIndexableItem;

@protocol EDIndexableItem <NSObject>
@property(readonly, nonatomic) _Bool requiresPreprocessing;
@property(readonly, nonatomic) _Bool shouldExcludeFromIndex;
@property(readonly, nonatomic) _Bool alwaysMarkAsIndexed;
@property(readonly, nonatomic) _Bool hasCompleteData;
@property(retain, nonatomic) NSData *underlyingData;
@property(readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property(readonly, nonatomic) unsigned long long itemInstantiationTime;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(nonatomic) long long indexingType;
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (long long)compare:(id <EDIndexableItem>)arg1;
- (EFFuture *)fetchIndexableAttachments;
- (void)preprocess;
- (CSSearchableItem *)searchableItem;
@end

