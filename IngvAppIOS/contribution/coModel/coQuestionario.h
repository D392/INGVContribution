//
//  coQuestionario.h
//  Project
//
//  Created by Adriano Di Luzio on 10/02/14.
//  Copyright (c) 2014 Swipe Stack Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "coWhereLocation.h"

@interface coQuestionario : NSObject
@property (strong, nonatomic) NSDate *whenDetail;
@property (nonatomic) coWhereLocation *where;
@property (nonatomic) NSNumber* floor;
@property (nonatomic) NSNumber* totalFloors;
@property (nonatomic) NSNumber* whereDetail;
@property (nonatomic) NSNumber* what;
@property (nonatomic) NSNumber* effects;
@property (nonatomic) NSNumber* paura;
@property (nonatomic) NSNumber* equilibrio;
@property (nonatomic) NSNumber* animali;
@property (nonatomic) NSNumber* lampadari;
@property (nonatomic) NSNumber* porcellane;
@property (nonatomic) NSNumber* soprammobili;
@property (nonatomic) NSNumber* porte;
@property (nonatomic) NSNumber* liquidi;
@property (nonatomic) NSNumber* quadri;
@property (nonatomic) NSNumber* mobili;
@property (nonatomic) NSNumber* rumore;
@property (nonatomic) NSNumber* inizioRumore;
@property (nonatomic) NSNumber* provenienzaRumore;
@property (nonatomic) NSNumber* piscine;
@property (nonatomic) NSNumber* piante;
@end