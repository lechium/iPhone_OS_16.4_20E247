//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCCloudData-Protocol.h"

@class NSString;

@protocol BCCollectionDetail <BCCloudData>
@property(readonly, nonatomic) int sortMode;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, copy, nonatomic) NSString *collectionDescription;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *collectionID;
@end
