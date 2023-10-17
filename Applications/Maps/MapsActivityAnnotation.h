//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MapsActivityAnnotation : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x001000000043cc49
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x001000000043cc1f
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x001000000043cb48
- (id)initWithSearchResult:(id)arg1;	// IMP=0x0010000000a273e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
