#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <emscripten.h>
;


size_t get_num_class(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 10;
}

const char* get_pred_transform(void) {
  return "sigmoid";
}

float get_sigmoid_alpha(void) {
  return 1.0;
}

float get_ratio_c(void) {
  return 1.0;
}

float get_global_bias(void) {
  return 0.0;
}

const char* get_threshold_type(void) {
  return "float64";
}

const char* get_leaf_output_type(void) {
  return "float64";
}


static inline double pred_transform(double margin) {
  const double alpha = (double)1.0;
  return (double)(1) / ((double)(1) + exp(-alpha * margin));
}

double predict(union Entry* data, int pred_margin) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  int i;
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3923079850657694156) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.754186958452252254) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.800208803021402737) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2926602884157683548) ) ) {
          sum += (double)-0.04974484796662773101;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3119121181108308605) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6217873835942290262) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6383081100096570371) ) ) {
                sum += (double)-0.0306896066934746331;
              } else {
                sum += (double)0.07238192564767115256;
              }
            } else {
              sum += (double)0.1360437544466142068;
            }
          } else {
            sum += (double)-0.0520314769194060861;
          }
        }
      } else {
        sum += (double)0.114295924732689555;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7198466085140227122) ) ) {
        sum += (double)0.02488818035322159367;
      } else {
        sum += (double)-0.1458872016629906843;
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6231141544582795566) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3225136977133627458) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1215232727665178231) ) ) {
          sum += (double)0.09202614710563072897;
        } else {
          sum += (double)-0.06403627892149248158;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3547232263065233093) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5242803123398961374) ) ) {
            sum += (double)0.2206929993331208095;
          } else {
            sum += (double)0.09602774777299284692;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5756068151659224919) ) ) {
            sum += (double)0.159129912142934149;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5874446886456140549) ) ) {
              sum += (double)-0.001511268493959161408;
            } else {
              sum += (double)0.1316941885038292459;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5349068355421656706) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.6663891612395829167) ) ) {
          sum += (double)0.1316941885038292182;
        } else {
          sum += (double)0.005688581191635601331;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5328788143752450912) ) ) {
          sum += (double)0.05139450956010752081;
        } else {
          sum += (double)-0.07070561336709603462;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7693551305196349999) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3923079850657694156) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5781706000458209926) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.799563408264851061) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6217873835942290262) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3982249819271540536) ) ) {
              sum += (double)-0.1182682358947388934;
            } else {
              sum += (double)-0.03238880209717748954;
            }
          } else {
            sum += (double)0.02144790524060109088;
          }
        } else {
          sum += (double)-0.1200692525268211713;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.176724343056853056) ) ) {
          sum += (double)0.00987307067118776624;
        } else {
          sum += (double)0.07551519463679577659;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3225136977133627458) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1718122809660775629) ) ) {
          sum += (double)0.03651649230624411796;
        } else {
          sum += (double)-0.1381702167922020108;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.715412733320189842) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2041000301808727768) ) ) {
            sum += (double)0.1576293320864740055;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8592929495564697318) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.570949019462884455) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4259295621412217403) ) ) {
                  sum += (double)-0.005543473009247595895;
                } else {
                  sum += (double)0.08831451119008293382;
                }
              } else {
                sum += (double)0.1500622180066523426;
              }
            } else {
              sum += (double)-0.01889812540740958349;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4200362520050553439) ) ) {
            sum += (double)0.101510659502240197;
          } else {
            sum += (double)-0.1039668816946965335;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3592603071263233971) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080857492063357572) ) ) {
        sum += (double)-0.01440851725879579819;
      } else {
        sum += (double)0.07832201509715161492;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7761098209680402649) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3771052455817653359) ) ) {
          sum += (double)-0.1215825844515014131;
        } else {
          sum += (double)-0.01674975233320169163;
        }
      } else {
        sum += (double)-0.1588706957182572654;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7693551305196349999) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3923079850657694156) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6281260094560955354) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.306985833270823516) ) ) {
          sum += (double)-0.093199396001350715;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7467895085669260524) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3072363796971707139) ) ) {
              sum += (double)0.04226832810670282797;
            } else {
              sum += (double)-0.05190333109057428118;
            }
          } else {
            sum += (double)-0.09303340673099309843;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.4770517371835105713) ) ) {
          sum += (double)0.006410297842052960909;
        } else {
          sum += (double)0.09747835940937252253;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.8938993809961816028) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3070531459473015423) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1361185037631305328) ) ) {
            sum += (double)0.03112788235066191178;
          } else {
            sum += (double)-0.1454454953478152568;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.715412733320189842) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2041000301808727768) ) ) {
              sum += (double)0.1363260931129099962;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8592929495564697318) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4688087340736071251) ) ) {
                  sum += (double)0.03480542758856888796;
                } else {
                  sum += (double)0.1214655081403696602;
                }
              } else {
                sum += (double)-0.01699416406106662655;
              }
            }
          } else {
            sum += (double)-0.02516286237902097545;
          }
        }
      } else {
        sum += (double)0.1356510521233263711;
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3592603071263233971) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3966314446497264945) ) ) {
        sum += (double)-0.01430934446008632135;
      } else {
        sum += (double)0.07185280879684984023;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3887213341336661077) ) ) {
        sum += (double)-0.02661599644920617513;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9127343273094995491) ) ) {
          sum += (double)-0.1584368891279384073;
        } else {
          sum += (double)-0.05065254474606343399;
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9318594325518013699) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.04750435174311779668) ) ) {
      sum += (double)0.1071887812352047969;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9305107763943011312) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3887903959890606775) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6281260094560955354) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7561008109695490642) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4660598875777125505) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4726654964988407648) ) ) {
                  sum += (double)-0.09846598667838529773;
                } else {
                  sum += (double)-0.01822058267836394393;
                }
              } else {
                sum += (double)0.0248077925039946294;
              }
            } else {
              sum += (double)-0.1105248999958248768;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.4770517371835105713) ) ) {
              sum += (double)-0.01067776886495017986;
            } else {
              sum += (double)0.07264550901403875327;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3495443996824426636) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5375869291695574148) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4358139932723132381) ) ) {
                sum += (double)-0.06815071525463935187;
              } else {
                sum += (double)0.07309244695078782883;
              }
            } else {
              sum += (double)0.1357985311720009136;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6343745661491941856) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4513567985292531448) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7006127928636008972) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5364638954309398633) ) ) {
                    sum += (double)-0.02644553942922480208;
                  } else {
                    sum += (double)0.09431878284878536522;
                  }
                } else {
                  sum += (double)-0.06350819239966554175;
                }
              } else {
                sum += (double)0.1051220865650597941;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.6127635206837257487) ) ) {
                sum += (double)-0.07181806463681071617;
              } else {
                sum += (double)0.01229786694573207877;
              }
            }
          }
        }
      } else {
        sum += (double)-0.08179820430394010855;
      }
    }
  } else {
    sum += (double)-0.08074408753745232481;
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9318594325518013699) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.04750435174311779668) ) ) {
      sum += (double)0.09732955564771561541;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9305107763943011312) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3887903959890606775) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.598509760534671309) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1657002943265646067) ) ) {
              sum += (double)-0.1376188899794064668;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.3684741513504493637) ) ) {
                sum += (double)0.05449536925490397477;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.570949019462884455) ) ) {
                  sum += (double)-0.1646533792480201763;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5210030480742898762) ) ) {
                    sum += (double)-0.06897667691581467475;
                  } else {
                    sum += (double)0.06890779091316431848;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7561739640559569375) ) ) {
              sum += (double)0.09544475117332371084;
            } else {
              sum += (double)-0.02028123199604076055;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3225136977133627458) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1718122809660775629) ) ) {
              sum += (double)0.0441581164985633684;
            } else {
              sum += (double)-0.1188902168719808972;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3495443996824426636) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5375869291695574148) ) ) {
                sum += (double)0.0348945736961554856;
              } else {
                sum += (double)0.1250498703809038714;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7254444030847656544) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6791578007903260605) ) ) {
                  sum += (double)0.08072056412763423117;
                } else {
                  sum += (double)0.003366206697493875216;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5066040108107902062) ) ) {
                  sum += (double)-0.05796542749189501076;
                } else {
                  sum += (double)0.01577772792236191782;
                }
              }
            }
          }
        }
      } else {
        sum += (double)-0.0738279881540109123;
      }
    }
  } else {
    sum += (double)-0.07276468512492505203;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6296243690330959319) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.08582085609093494105) ) ) {
      sum += (double)-0.08977657828896662418;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.9111098549290822524) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9435062398347729973) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3070531459473015423) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5896344959978291334) ) ) {
              sum += (double)0.01339235349287115975;
            } else {
              sum += (double)-0.0835094198966880169;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.5048704850543442868) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4281420390050822422) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.3797844713686023277) ) ) {
                  sum += (double)0.04140699810650505519;
                } else {
                  sum += (double)-0.1182335290632027941;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4156382644068848387) ) ) {
                  sum += (double)-0.0176811647440285255;
                } else {
                  sum += (double)0.08707343248519662515;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5913403517253997821) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.5149213513103615414) ) ) {
                  sum += (double)0.1418667422561716296;
                } else {
                  sum += (double)0.07497165387467152886;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3356228351747962413) ) ) {
                  sum += (double)0.0791796887637710306;
                } else {
                  sum += (double)-0.008244372271765337476;
                }
              }
            }
          }
        } else {
          sum += (double)-0.07538328723277842869;
        }
      } else {
        sum += (double)0.124910931118322216;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1423073207918977567) ) ) {
      sum += (double)0.07439457121647827242;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4654958515441259825) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7457736206135520129) ) ) {
          sum += (double)0.002212113335839480718;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5738440309285263163) ) ) {
            sum += (double)-0.07930743777774867942;
          } else {
            sum += (double)-0.143590656396294758;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3824022725414511492) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1566566327459823216) ) ) {
            sum += (double)-0.02208715262655701339;
          } else {
            sum += (double)0.09502765334952155418;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6050754968144743673) ) ) {
            sum += (double)-0.145710936952163056;
          } else {
            sum += (double)-0.005548795375067308404;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9318594325518013699) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.04750435174311779668) ) ) {
      sum += (double)0.08724760454416546906;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.918665970813669186) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7960558973373984548) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7191069731174560831) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5251284723758105066) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6521107073081583438) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6296243690330959319) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4831124233462352202) ) ) {
                    sum += (double)-0.01983388673866720922;
                  } else {
                    sum += (double)0.09537824321834469099;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.4859614446434133428) ) ) {
                    sum += (double)-0.1049021182701331822;
                  } else {
                    sum += (double)0.009672438573908613557;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3640617980158636358) ) ) {
                  sum += (double)0.0001754294242159432473;
                } else {
                  sum += (double)-0.12591666831124948;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7504167737237966707) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.6599604892149627533) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763632728473064626) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.2087954018219846108) ) ) {
                      sum += (double)0.05812351556484057769;
                    } else {
                      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3784620562842930802) ) ) {
                        sum += (double)0.02078373923266035872;
                      } else {
                        sum += (double)-0.1199156898615880984;
                      }
                    }
                  } else {
                    sum += (double)0.1022640586448883004;
                  }
                } else {
                  sum += (double)-0.07789509136898135899;
                }
              } else {
                sum += (double)0.1105407689645309804;
              }
            }
          } else {
            sum += (double)-0.09125799716747262647;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3381487294617493422) ) ) {
            sum += (double)0.1053448436537070959;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3541236348798731393) ) ) {
              sum += (double)0.1059792510347442041;
            } else {
              sum += (double)-0.0548726255133998031;
            }
          }
        }
      } else {
        sum += (double)0.06611918663362295612;
      }
    }
  } else {
    sum += (double)-0.06583459012053392845;
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9318594325518013699) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.04750435174311779668) ) ) {
      sum += (double)0.07983746233120436742;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.918665970813669186) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8970229938689519011) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.1549126115433851758) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6014199241828462883) ) ) {
              sum += (double)-0.01761727161635301755;
            } else {
              sum += (double)-0.1327686630954100222;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09099005476489226141) ) ) {
              sum += (double)-0.09585317686909365642;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296370944392273516) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.112807412676478383) ) ) {
                  sum += (double)0.05997929587969337561;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4358139932723132381) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3901812988571716212) ) ) {
                      sum += (double)-0.007371825747843125352;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2259163447478644005) ) ) {
                        sum += (double)-0.05133702826381524725;
                      } else {
                        sum += (double)-0.1677622132153888668;
                      }
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.6762396144441480406) ) ) {
                      sum += (double)0.05321551296378343454;
                    } else {
                      sum += (double)-0.05308905961964829889;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6167078322402624879) ) ) {
                  sum += (double)0.1164877647387732029;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6482780023796984592) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3887903959890606775) ) ) {
                      sum += (double)-0.07451995534893618434;
                    } else {
                      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.658674150590770946) ) ) {
                        sum += (double)0.06025916780635154346;
                      } else {
                        sum += (double)-0.05846256662799687032;
                      }
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3901812988571716212) ) ) {
                      sum += (double)0.1135251362418895626;
                    } else {
                      sum += (double)-0.0001619763570570344473;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5466506554785367511) ) ) {
            sum += (double)0.004418901438535772185;
          } else {
            sum += (double)0.1009671196746727145;
          }
        }
      } else {
        sum += (double)0.05993573493119272455;
      }
    }
  } else {
    sum += (double)-0.05960545024685962034;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6296243690330959319) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.08582085609093494105) ) ) {
      sum += (double)-0.08357848269285023113;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.9111098549290822524) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4769652560195653535) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1321453316370291564) ) ) {
            sum += (double)-0.07957982405924329816;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1774165365465972533) ) ) {
              sum += (double)0.091089257818825764;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1338099919769082657) ) ) {
                sum += (double)-0.09706681208521932003;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8502484998386512505) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3426594925638395961) ) ) {
                    sum += (double)-0.0448559956506082852;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.437198387574464109) ) ) {
                      sum += (double)0.06999159553303799242;
                    } else {
                      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.6687534835303413638) ) ) {
                        sum += (double)0.0328094114926033853;
                      } else {
                        sum += (double)-0.08444277487736534527;
                      }
                    }
                  }
                } else {
                  sum += (double)0.09707438518378082304;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5588656662564847055) ) ) {
            sum += (double)0.1183654190612585116;
          } else {
            sum += (double)-0.003090979794236342268;
          }
        }
      } else {
        sum += (double)0.1071306454200125907;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1423073207918977567) ) ) {
      sum += (double)0.06766450412452733321;
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2150178844340828455) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7879257989685514163) ) ) {
          sum += (double)-0.09790178393417209302;
        } else {
          sum += (double)-0.05337738465444302055;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3119121181108308605) ) ) {
          sum += (double)0.05395742096095018647;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4350518578228682598) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4432224591052248974) ) ) {
              sum += (double)-0.1147620450496070338;
            } else {
              sum += (double)-0.02292227634904482267;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8001197553752150693) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5738440309285263163) ) ) {
                sum += (double)0.06429000972549978044;
              } else {
                sum += (double)-0.04197595782575608281;
              }
            } else {
              sum += (double)-0.07505838545110281312;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9318594325518013699) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.04750435174311779668) ) ) {
      sum += (double)0.07112776023600485276;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.121795815314268599) ) ) {
        sum += (double)-0.05488444887883125317;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.953800902982817278) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4513567985292531448) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.168947237649741816) ) ) {
              sum += (double)-0.1205940089463670706;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3360535353591994068) ) ) {
                sum += (double)0.08062791457257538486;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4294214084167969347) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6530785468654862758) ) ) {
                    sum += (double)-0.1080041397922013452;
                  } else {
                    sum += (double)-0.008115618150235188663;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3258171252444256871) ) ) {
                    sum += (double)0.07965186451014884261;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2302349709881643391) ) ) {
                      sum += (double)-0.05160281223898930542;
                    } else {
                      sum += (double)0.01854033271341764405;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6473895174063551972) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6969335801637388528) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4455012236031893891) ) ) {
                  sum += (double)0.1259703023639301978;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4503290019104047581) ) ) {
                    sum += (double)0.01025313918930504352;
                  } else {
                    sum += (double)0.09834343858021438178;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5393802532161561247) ) ) {
                  sum += (double)-0.04007459855074124722;
                } else {
                  sum += (double)0.07268650925003687646;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3970018463573398715) ) ) {
                sum += (double)0.05530324618637044026;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8583979172346761777) ) ) {
                  sum += (double)-0.1150598958918786496;
                } else {
                  sum += (double)0.005012478389540877752;
                }
              }
            }
          }
        } else {
          sum += (double)-0.06738341895225713474;
        }
      }
    }
  } else {
    sum += (double)-0.05519124682094755929;
  }

  sum = sum + (double)(0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}

EMSCRIPTEN_KEEPALIVE
void pred(
    double* vals,
    int* rows_ptr,
    int* cols_ind,
    double* results,
    int nrow,
    int ncol,
    int marg
    ) {
    const size_t num_feature = get_num_feature();
    union Entry* inst = malloc(sizeof(union Entry) * num_feature);
    int rid, ibegin, iend, i;
    
    for (i = 0; i < num_feature; ++i) {
    inst[i].missing = -1;
    }
    for (rid = 0; rid < nrow; ++rid) {
        ibegin = rows_ptr[rid];
        iend = rows_ptr[rid + 1];
    /* Fill nonzeros */
    for (i = ibegin; i < iend; ++i) {
        inst[cols_ind[i]].fvalue = vals[i];
    }
    results[rid] = predict(inst, 0);
    /* Drop nonzeros */
    for (i = ibegin; i < iend; ++i) {
        inst[cols_ind[i]].missing = -1;
    }
    printf("pred[%i] = %f\n", rid, results[rid]);
    }
    free(inst);
}


