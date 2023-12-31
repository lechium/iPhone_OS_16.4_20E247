//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSBlockOperation, NSNumber, NSSet, NSString;

@interface CarSearchItemCellModel : NSObject
{
    NSBlockOperation *_markedAsUpdatedOperation;	// 8 = 0x8
    NSString *_firstLine;	// 16 = 0x10
    NSString *_secondLine;	// 24 = 0x18
    NSNumber *_rating;	// 32 = 0x20
    NSString *_chargerNumberString;	// 40 = 0x28
    MKMapItem *_mapItem;	// 48 = 0x30
    CDUnknownBlockType _updateBlock;	// 56 = 0x38
    NSSet *_observedKeyPaths;	// 64 = 0x40
    id _observedObject;	// 72 = 0x48
    NSString *_debugSubtitle;	// 80 = 0x50
}

+ (id)modelWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00400000003abff0
- (void).cxx_destruct;	// IMP=0x00200000003ac6f7
@property(copy, nonatomic) NSString *debugSubtitle; // @synthesize debugSubtitle=_debugSubtitle;
@property(retain, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
@property(retain, nonatomic) NSSet *observedKeyPaths; // @synthesize observedKeyPaths=_observedKeyPaths;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSString *chargerNumberString; // @synthesize chargerNumberString=_chargerNumberString;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *secondLine; // @synthesize secondLine=_secondLine;
@property(copy, nonatomic) NSString *firstLine; // @synthesize firstLine=_firstLine;
- (void)markAsUpdated;	// IMP=0x00100000003ac415
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000003ac37e
- (void)observeObject:(id)arg1 forKeyPaths:(id)arg2;	// IMP=0x00100000003ac084
- (void)dealloc;	// IMP=0x00100000003ac042

@end

