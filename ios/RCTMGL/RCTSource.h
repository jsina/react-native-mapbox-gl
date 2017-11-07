//
//  BaseSource.h
//  RCTMGL
//
//  Created by Nick Italiano on 9/8/17.
//  Copyright © 2017 Mapbox Inc. All rights reserved.
//

#import <React/RCTComponent.h>
#import "RCTLayer.h"
#import <UIKit/UIKit.h>
@import Mapbox;

@interface RCTSource : UIView

extern NSString *const DEFAULT_SOURCE_ID;

@property (nonatomic, strong) NSMutableArray<id<RCTComponent>> *reactSubviews;
@property (nonatomic, strong) NSMutableArray<RCTLayer*> *layers;
@property (nonatomic, strong) MGLSource *source;
@property (nonatomic, strong) MGLMapView *map;

@property (nonatomic, copy) NSString *id;

- (void)addToMap;
- (void)removeFromMap;
- (MGLSource*)makeSource;

+ (BOOL)isDefaultSource:(NSString*)sourceID;

@end
