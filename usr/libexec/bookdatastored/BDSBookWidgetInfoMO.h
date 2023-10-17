//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class BCReadingNowDetail, NSDate, NSNumber, NSString;

@interface BDSBookWidgetInfoMO : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x004000000003b1d5
- (id)getBookWidgetInfoObject;	// IMP=0x002000000003b1f5
- (id)initIntoManagedObjectContext:(id)arg1;	// IMP=0x001000000003b13e

// Remaining properties
@property(copy, nonatomic) NSString *assetID; // @dynamic assetID;
@property(copy, nonatomic) NSString *cloudAssetType; // @dynamic cloudAssetType;
@property(copy, nonatomic) NSString *coverURL; // @dynamic coverURL;
@property(nonatomic) _Bool isExplicit; // @dynamic isExplicit;
@property(readonly, nonatomic) _Bool isTrackedAsRecent; // @dynamic isTrackedAsRecent;
@property(readonly, copy, nonatomic) NSDate *lastEngagedDate; // @dynamic lastEngagedDate;
@property(copy, nonatomic) NSString *libraryContentAssetType; // @dynamic libraryContentAssetType;
@property(copy, nonatomic) NSString *pageProgressionDirection; // @dynamic pageProgressionDirection;
@property(retain, nonatomic) BCReadingNowDetail *readingNowDetail; // @dynamic readingNowDetail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSNumber *totalDuration; // @dynamic totalDuration;

@end
