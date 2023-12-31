//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MKMapServiceCategoriesTicket;

@interface NavSARAPIController : NSObject
{
    id <MKMapServiceCategoriesTicket> _ticket;	// 8 = 0x8
    NSArray *_categories;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002f9d43
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) id <MKMapServiceCategoriesTicket> ticket; // @synthesize ticket=_ticket;
- (id)fetchCategoriesTicket;	// IMP=0x00100000002f9b2e
- (void)cancelFetchingSARCategories;	// IMP=0x00100000002f9ae3
- (void)fetchSARCategoriesOnCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f97e3

@end

